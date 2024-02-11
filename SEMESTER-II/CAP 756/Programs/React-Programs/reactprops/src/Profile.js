import React from "react";

const Profile = ({ title, text, image }) => {
  return (
    <div className="example-container">
      <h2>{title}</h2>
      <img src={image} alt={title} />
      <p>{text}</p>
    </div>
  );
};

export default Profile;
