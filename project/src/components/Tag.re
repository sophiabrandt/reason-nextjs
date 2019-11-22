open ReactUtils;

[@react.component]
let make = (~text: string=?) =>
  <a href="#">
    <span className="tag is-link is-light is-rounded">
      {s("#" ++ text)}
    </span>
  </a>;

let default = make;
