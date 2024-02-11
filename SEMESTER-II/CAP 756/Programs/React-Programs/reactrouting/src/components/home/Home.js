import React, { useState } from "react";

const Home = () => {
  const [name, setName] = useState("");
  const [email, setEmail] = useState("");
  const [phone, setPhone] = useState("");

  const handleSubmit = (e) => {
    e.preventDefault();
    // onSubmit({ name, email, phone });
  };

  const handleNameChange = (e) => {
    setName(e.target.value);
  };

  const handleEmailChange = (e) => {
    setEmail(e.target.value);
  };

  const handlePhoneChange = (e) => {
    setPhone(e.target.value);
  };

  return (
    <div className="sign-container">
      <form className="signin" onSubmit={handleSubmit}>
        <label>Name:</label>
        <input type="text" value={name} onChange={handleNameChange} />
        <br />
        <label>Email:</label>
        <input type="email" value={email} onChange={handleEmailChange} />
        <br />
        <label>Phone:</label>
        <input type="tel" value={phone} onChange={handlePhoneChange} />
        <br />
        <button type="submit">Submit</button>
      </form>
    </div>
  );
};

export default Home;
