// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as Css from "bs-css/src/Css.js";
import * as React from "react";
import * as $$String from "bs-platform/lib/es6/string.js";
import * as Tags$ReasonNextjs from "./layout/Tags.bs.js";

var dateStyles = Css.style(/* :: */[
      Css.fontSize(Css.px(10)),
      /* [] */0
    ]);

function Post(Props) {
  var title = Props.title;
  var body = Props.body;
  var tags = Props.tags;
  var match = Props.firstName;
  var firstName = match !== undefined ? match : "";
  var match$1 = Props.lastName;
  var lastName = match$1 !== undefined ? match$1 : "";
  var createdAt = Props.createdAt;
  var localCreatedAt = new Date(createdAt).toLocaleString();
  var match$2 = body.length < 100;
  var summary = match$2 ? body : $$String.sub(body, 0, 100) + "...";
  var authorName = firstName + (" " + lastName);
  return React.createElement("div", {
              className: "column is-one-third"
            }, React.createElement("div", {
                  className: "card"
                }, React.createElement("div", {
                      className: "card-content"
                    }, React.createElement("p", {
                          className: "title is-4"
                        }, title), React.createElement("p", {
                          className: "title is-4"
                        }, "By " + authorName, React.createElement("br", undefined), React.createElement("span", {
                              className: dateStyles
                            }, localCreatedAt)))), React.createElement("div", {
                  className: "content"
                }, summary, React.createElement("p", undefined, React.createElement(Tags$ReasonNextjs.make, {
                          tags: tags
                        }))));
}

var make = Post;

var $$default = Post;

export {
  dateStyles ,
  make ,
  $$default ,
  $$default as default,
  
}
/* dateStyles Not a pure module */
