require "minitest/autorun"
require "hello"

class TestHello < MiniTest::Unit::TestCase
  def test_sanity
    assert_equal 'hello world', Hello.hello_world
  end
end
