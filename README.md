Moped Turbo[![Build Status](https://secure.travis-ci.org/mongoid/moped-turbo.png?branch=master&.png)](http://travis-ci.org/mongoid/moped-turbo)
========

Moped Turbo is C extensions for Moped, a Ruby driver for MongoDB

Roadmap
-------

We identify the parts of Moped that we can get significantly faster
in C, and add extensions for these areas. Moped's design should make
the C parts easy and small.

* `ObjectId` generation is the first candidate.
* Serialization/Deserialization of documents via `Document#serialize` and
  `Document#deserialize`

Project Tracking
----------------

* [Mongoid Google Group](http://groups.google.com/group/mongoid)
* [Moped Website and Documentation](http://mongoid.org/en/moped/)

Compatibility
-------------

Moped Turbo is tested against MRI 1.9.3, 2.0.0

Documentation
-------------

Please see the new Mongoid website for up-to-date documentation in
the Moped section: [mongoid.org](http://mongoid.org/en/moped/)

License
-------

Copyright (c) 2012 Durran Jordan

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Credits
-------

Durran Jordan durran at gmail dot com
