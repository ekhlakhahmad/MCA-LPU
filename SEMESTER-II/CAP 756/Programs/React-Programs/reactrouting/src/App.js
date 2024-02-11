import { BrowserRouter as Router, Routes, Route } from "react-router-dom";

import "./App.css";
import Home from "./components/home/Home";
import Table from "./components/table/Table";
import NotFound from "./components/notFound/NotFound";
import Header from "./components/Header/Header";
import About from "./components/about/About";

function App() {
  return (
    <div className="App">
      <Router>
        <Header />
        <Routes>
          <Route path="/" element={<Home />} />
          <Route path="about" element={<About />} />

          <Route path="table" element={<Table />} />

          <Route path="*" element={<NotFound />} />
        </Routes>
      </Router>
    </div>
  );
}

export default App;
