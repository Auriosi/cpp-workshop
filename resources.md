# Extra Resources

This list contains high-quality, beginner-friendly libraries and tools to help you build your hackathon project. Since you only have 36 hours, these resources were chosen for their ease of setup and documentation.

## 🌐 Web & Networking

Building a web server or connecting to an API in C++ doesn't have to be a nightmare.

* [Crow](https://crowcpp.org/): A fast and easy-to-use framework for creating web microservices. It feels very similar to Python's Flask.
* [Pistache](https://pistacheio.github.io/pistache/): A high-performance REST toolkit for C++ providing an elegant API for handling requests.
* [CPR](https://libcpr.org/): A wrapper around libcurl that makes making HTTP requests (like GET and POST) as simple as it is in Python's requests.

## 🎮 Video Games & Graphics

If you want to put something on a screen quickly, these are the gold standards.

* [Raylib](https://www.raylib.com/): The most beginner-friendly library for 2D and 3D games. It handles the windowing and OpenGL overhead for you.
* [SFML](https://www.sfml-dev.org/): A simple, object-oriented multimedia library. Great for 2D games, sound, and input handling.
* [SDL3](https://wiki.libsdl.org/SDL3): The latest version of the industry standard. It’s lower-level than Raylib but incredibly powerful for cross-platform hardware access.

## 🛠️ Utilities & Tools

Small libraries that solve big problems, from parsing data to making your terminal look better.

* [nlohmann/json](https://github.com/nlohmann/json): The absolute "must-have" for any project that deals with data. It makes JSON feel like a native C++ object.
* [fmt](https://fmt.dev): A modern, safe alternative to printf. It's so good it was recently added to the official C++20 standard.
* [cxxopts](https://github.com/jarro2783/cxxopts): A lightweight header-only library for parsing command-line arguments (e.g., ./mygame --difficulty hard).

## 📐 Math & Physics

Don't reinvent the wheel—let the math experts handle the heavy lifting.

* [GLM (OpenGL Mathematics)](https://github.com/g-truc/glm): A header-only library for 3D math (vectors, matrices, quaternions). It uses the same syntax as GLSL shaders.
* [Box2D](https://box2d.org/): The definitive 2D physics engine. Perfect if you’re building a platformer or a puzzle game with gravity and collisions.

## 🧪 Testing & Debugging

Save yourself hours of searching for bugs during the 2:00 AM slump.

* [Catch2](https://github.com/catchorg/Catch2): A modern, C++-native test framework. It’s very easy to set up and helps you verify your logic works before you integrate it.
* [Google Test](https://github.com/google/googletest): The industry standard for testing C++ code. Great for larger, multi-file projects.

## 📖 Essential Documentation

* [LearnCPP.com](https://www.learncpp.com/): The single best resource for looking up syntax and best practices.
* [CppReference](https://en.cppreference.com/w/cpp): The "Encyclopedia" of C++. Use this when you need to know exactly how a specific function (like std::vector) works.
* [CMake Tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html): The official guide to CMake. It’s a bit dense, but it’s the best way to learn how to manage your build system effectively.