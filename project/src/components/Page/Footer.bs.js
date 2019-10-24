// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as Css from "bs-css/src/Css.js";
import * as React from "react";

var footerStyles = Css.merge(/* :: */[
      Css.style(/* :: */[
            Css.background(Css.rgb(244, 244, 244)),
            /* [] */0
          ]),
      /* :: */[
        "footer",
        /* [] */0
      ]
    ]);

var Styles = /* module */[/* footerStyles */footerStyles];

function Footer(Props) {
  return React.createElement("footer", {
              className: footerStyles
            }, React.createElement("div", {
                  className: "content has-text-centered"
                }, React.createElement("p", undefined, React.createElement("strong", undefined, "This site "), "was made with ReasonML ReasonReact and Next.js")));
}

var make = Footer;

export {
  Styles ,
  make ,
  
}
/* footerStyles Not a pure module */