require "test/unit"
require "aes/aes"

class TestAes < Test::Unit::TestCase
  def test_hell_world
    assert_equal 'hello world', Aes.hello_world
  end
end