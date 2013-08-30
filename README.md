### Hello

http://github.com/szemek/hello

#### Description

My first Ruby native extension in C.

#### Installation

```
rake compile
rake package
gem install pkg/*.gem
```

#### Usage

```ruby
irb

irb(main):001:0> require 'hello'
=> true
irb(main):002:0> Hello.hello_world
=> "hello world"
```

#### Sources

[RubyGems Guides: Gems with extensions](http://guides.rubygems.org/gems-with-extensions/)
[RubyGems Guides: Make your own gem](http://guides.rubygems.org/make-your-own-gem)
[Hoe](https://github.com/seattlerb/hoe)
[README.EXT](https://github.com/ruby/ruby/blob/trunk/README.EXT)
