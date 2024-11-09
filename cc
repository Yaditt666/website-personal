.contact .row {
  display: flex;
  margin-top: 3rem;
  background-color: #222;
  flex-wrap: wrap;
  
}

.contact .row .map {
  flex: 1 1 45rem;
  width: 200%;
  object-fit: cover;
  align-items: center;
}

.contact .row form {
  flex: 1 1 45rem;
  padding: 5rem 2rem;
  text-align: center;
}

.contact .row form .input-group {
  display: flex;
  align-items: center;
  margin-top: 2rem;
  background-color: var(--bg);
  border: 1px solid #eee;
  padding-left: 2rem;
}

.contact .row form .input-group input{
  width: 100%;
  padding: 1rem;
  font-size: 1.5rem;
  background: none;
  color: #fff;
}
<iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3984.551351118923!2d119.37538947383788!3d-2.9443487396839814!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x2d930a5672b3d67f%3A0xbfbcb4bfd7b34d61!2sSMK%20Negeri%201%20Mamasa!5e0!3m2!1sid!2sid!4v1684825831133!5m2!1sid!2sid"  allowfullscreen="" loading="lazy" referrerpolicy="no-referrer-when-downgrade"  class="map"></iframe>
      <form action="">
        <div class="input-group">
          <i data-feather="user"></i>
          <input type="text" placeholder="Name">
          </div>
        <div class="input-group">
          <i data-feather="mail"></i>
          <input type="text" placeholder="E-mail">
          </div>
        <div class="input-group">
          <i data-feather="phone"></i>
          <input type="text" placeholder="No hp">
        </div>
        <button type="submit" class="btn">send message</button>
      </form>