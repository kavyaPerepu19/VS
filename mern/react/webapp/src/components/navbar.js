import React from "react";
import "./navbar.css";
const Navbar = () => {
  return (
    <section className="h-wrapper">
      <img className="comp3" src="../logo.png" alt="logo" width={90} />
      <div className="h-container">

        <a href="" className="comp1">ADD PROPERTY</a>

        <a href="" className="comp2">PROPERTIES</a>
        <button className="button">
          <a href="">CONNECT YOUR WALLET</a>
        </button>
      </div>
    </section>
  );
};

export default Navbar;