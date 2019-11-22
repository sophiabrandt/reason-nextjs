open ReactUtils;
open NavbarStyles;

type state = {menuIsActive: bool};

type action =
  | ToggleMenu;

[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | ToggleMenu => {menuIsActive: !state.menuIsActive}
        },
      {menuIsActive: false},
    );
  <div className="hero-head">
    <nav id="topnav" className=topnavStyles>
      <div className="container">
        <div className=navbarBrand>
          <Next.Link href="/">
            <a className=subtitle> {"ReasonReact Next.js" |> s} </a>
          </Next.Link>
          <span
            className={navbarBurger(state.menuIsActive)}
            onClick={_event => dispatch(ToggleMenu)}>
            <span />
            <span />
            <span />
          </span>
        </div>
        <div id="navbarMenu" className={navbarMenu(state.menuIsActive)}>
          <div className="navbar-end">
            <div className=navbarItem>
              <Next.Link href="/about"> <a> {"About" |> s} </a> </Next.Link>
            </div>
            <div className=navbarItem>
              <Next.Link href="/contact">
                <a> {"Contact" |> s} </a>
              </Next.Link>
            </div>
          </div>
        </div>
      </div>
    </nav>
  </div>;
};
