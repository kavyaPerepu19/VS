import data from "./data.json";
const id="0x0d8354473582e24a71f61f4D9bFda41ca1f94b1e";

return (
  <div>
    {data.map((user) => (
      <div key={user.id}>
        <div>wishlist {user[id]}</div>
      </div>
    ))}
  </div>
);
