open ReactUtils;

module ListPostsQueryConfig = [%graphql
  {|
    query ListPostsQuery {
      listPosts {
        items {
          id
          title
          body
          createdAt
          updatedAt
          tags
          author {
            firstName
            lastName
          }
        }
      }
    }
  |}
];

module ListPostQuery = ReasonApolloHooks.Query.Make(ListPostsQueryConfig);

let parseDate = (createdAt: option(Js.Json.t)): string =>
  Belt.Option.(
    getWithDefault(createdAt, Js.Json.null)
    |> Js.Json.decodeString
    |> getWithDefault(_, "")
  );

[@react.component]
let make = () => {
  let (simple, _full) = ListPostQuery.use();
  <Section
    title="My blog"
    subtitle="A blog application demonstrating ReasonML, ReasonReact and Next.js">
    <div className="columns is-multiline">
      {
        switch (simple) {
        | Loading => <p> {s("Loading...")} </p>
        | Data(response) =>
          Belt.Option.(
            response##listPosts
            ->flatMap(listPosts => listPosts##items)
            ->mapWithDefault(React.null, items =>
                items
                ->Belt.Array.map(item =>
                    item
                    ->mapWithDefault(
                        React.null,
                        item => {
                          let parsedCreatedAt = parseDate(item##createdAt);
                          <Post
                            key=item##title
                            title=item##title
                            body=item##body
                            tags=item##tags
                            firstName=item##author##firstName
                            lastName=item##author##lastName
                            createdAt=parsedCreatedAt
                          />;
                        },
                      )
                  )
                ->React.array
              )
          )
        | NoData
        | Error(_) => <p> {s("No posts sad reacts only!")} </p>
        }
      }
    </div>
  </Section>;
};

let default = make;
