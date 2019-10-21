open ReactUtils;

[@react.component]
let make = (~title: string, ~subtitle: string=?, ~children: React.element=?) =>
  <section className="section is-fluid">
    <div className="container">
      <h1 className="title"> {s(title)} </h1>
      <h2 className="subtitle"> {s(subtitle)} </h2>
      children
    </div>
  </section>;
