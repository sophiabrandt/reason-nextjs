// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as $$Array from "bs-platform/lib/es6/array.js";
import * as React from "react";
import * as Tag$ReasonNextjs from "../Tag.bs.js";

function Tags(Props) {
  var tags = Props.tags;
  return $$Array.map((function (tag) {
                return React.createElement(Tag$ReasonNextjs.make, {
                            text: tag
                          });
              }), tags);
}

var make = Tags;

var $$default = Tags;

export {
  make ,
  $$default ,
  $$default as default,
  
}
/* react Not a pure module */