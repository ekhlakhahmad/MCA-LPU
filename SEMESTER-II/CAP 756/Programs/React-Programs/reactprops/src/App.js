import "./App.css";
import Profile from "./Profile";
import ProfileImg from "./profile.jpg";

function App() {
  return (
    <div className="App">
      <Profile
        title="John doe"
        text="this is profile of john doe who is a full stack developer which want to work in amazon"
        image={ProfileImg}
      />
    </div>
  );
}

export default App;
