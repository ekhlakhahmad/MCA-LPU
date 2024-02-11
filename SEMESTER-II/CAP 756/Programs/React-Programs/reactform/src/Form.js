import React, { useState } from "react";

const Form = () => {
  const [name, setName] = useState("");
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");
  const [confirmPassword, setConfirmPassword] = useState("");
  const [address, setAddress] = useState("");
  const [city, setCity] = useState("");
  const [state, setState] = useState("");
  const [zip, setZip] = useState("");

  const handleSubmit = (event) => {
    event.preventDefault();
    console.log({
      name,
      email,
      password,
      confirmPassword,
      address,
      city,
      state,
      zip,
    });
  };

  return (
    <form onSubmit={handleSubmit} className="form-container">
      <h1>React Form</h1>
      <div className="form-row">
        <label htmlFor="name">Name</label>
        <input
          type="text"
          id="name"
          value={name}
          onChange={(event) => setName(event.target.value)}
        />
      </div>
      <div className="form-row">
        <label htmlFor="email">Email</label>
        <input
          type="email"
          id="email"
          value={email}
          onChange={(event) => setEmail(event.target.value)}
        />
      </div>
      <div className="form-row">
        <label htmlFor="password">Password</label>
        <input
          type="password"
          id="password"
          value={password}
          onChange={(event) => setPassword(event.target.value)}
        />
      </div>
      <div className="form-row">
        <label htmlFor="confirmPassword">Confirm Password</label>
        <input
          type="password"
          id="confirmPassword"
          value={confirmPassword}
          onChange={(event) => setConfirmPassword(event.target.value)}
        />
      </div>
      <div className="form-row">
        <label htmlFor="address">Address</label>
        <input
          type="text"
          id="address"
          value={address}
          onChange={(event) => setAddress(event.target.value)}
        />
      </div>
      <div className="form-row">
        <label htmlFor="city">City</label>
        <input
          type="text"
          id="city"
          value={city}
          onChange={(event) => setCity(event.target.value)}
        />
      </div>
      <div className="form-row">
        <label htmlFor="state">State</label>
        <input
          type="text"
          id="state"
          value={state}
          onChange={(event) => setState(event.target.value)}
        />
      </div>
      <div className="form-row">
        <label htmlFor="zip">Zip</label>
        <input
          type="text"
          id="zip"
          value={zip}
          onChange={(event) => setZip(event.target.value)}
        />
      </div>
      <button type="submit">Submit</button>
    </form>
  );
};

export default Form;
