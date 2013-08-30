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
