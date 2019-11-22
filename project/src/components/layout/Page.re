open ReactUtils;

[%bs.raw {|require("bulma")|}];

Css.(global("p", [marginBottom(px(20))]));

[@react.component]
let make = (~children) =>
  <>
    <Next.Head>
      <meta
        name="viewport"
        content="width=device-width, initial-scale=1, shrink=to-fit=no, viewport=fit=cover"
      />
      <title> {"ReasonReact with Next.js" |> s} </title>
    </Next.Head>
    <Navbar />
    children
    <Footer />
  </>;
