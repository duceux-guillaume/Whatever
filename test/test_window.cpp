/*

class MockWindow : public IWindow {
public:
  bool hasBeenOpen;
  bool Open() { hasBeenOpen = true; }
};

TEST(Toto, Titi) {
  auto window = new MockWindow();
  Toto toto(window);
  toto.doSomething();
  ASSERT_TRUE(window.hasBeenOpen);
}
*/