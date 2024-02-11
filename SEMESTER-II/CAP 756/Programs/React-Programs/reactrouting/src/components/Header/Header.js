import React from "react";
import { Link } from "react-router-dom";

const Header = () => {
  return (
    <div className="nav-container">
      <nav>
        <div>logo</div>

        <div className="list">
          <ul>
            <li>
              {" "}
              <Link className="" to="/">
                Home
              </Link>
            </li>
            <li>
              {" "}
              <Link className="" to="about">
                About
              </Link>
            </li>
            <li>
              {" "}
              <Link className="" to="table">
                Table
              </Link>
            </li>
          </ul>
        </div>
      </nav>
    </div>
  );
};

export default Header;
