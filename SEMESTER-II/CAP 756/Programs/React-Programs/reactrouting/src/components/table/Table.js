import React from "react";
import { Link } from "react-router-dom";

const Table = () => {
  return (
    <>
      <div className="table-container">
        <table className="table">
          <thead>
            <tr>
              <th>Name</th>
              <th>roll no</th>
              <th>course</th>
              <th>title</th>
            </tr>
          </thead>
          <tbody>
            <tr>
              <td>john doe </td>
              <td>22</td>
              <td>mca</td>
              <td>mca</td>
            </tr>
            <tr>
              <td>john doe </td>
              <td>22</td>
              <td>mca</td>
              <td>mca</td>
            </tr>
            <tr>
              <td>john doe </td>
              <td>22</td>
              <td>mca</td>
              <td>mca</td>
            </tr>
            <tr>
              <td>john doe </td>
              <td>22</td>
              <td>mca</td>
              <td>mca</td>
            </tr>
          </tbody>
        </table>
      </div>
      <h1>
        {" "}
        <Link to="/">home</Link>
      </h1>
    </>
  );
};

export default Table;
