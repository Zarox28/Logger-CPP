# Logger

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License: AGPL v3](https://img.shields.io/badge/License-AGPL_v3-blue.svg?style=for-the-badge)

> Version: **1.1.0**

---

## Table of Contents

- [About](#about)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
  - [Init](#init)
  - [Debug](#debug)
  - [Info](#info)
  - [Success](#success)
  - [Warning](#warning)
  - [Error](#error)
  - [Fatal](#fatal)
- [Changelog](#changelog)
- [Contributing](#contributing)
- [License](#license)
- [Authors](#authors)

## About

This is a simple `C++` logger that can be used to log messages to the console or to a file.

## Features

- Debug, Info, Warning, Error and Fatal log levels

## Installation

1. Add the `Logger` submodule to your project

```bash
git submodule add https://github.com/Zarox28/Logger.git libs/Logger
```

2. Initialize the submodule & update it

```bash
git submodule update --init --recursive
```

3. Include the `Logger` header file in your project

```cpp
#include "libs/Logger/Logger.h"
```

> **Note:** The `Logger` submodule is located in the `libs` directory of your project.

> **Tip:** You can also add `using namespace Logger;` to your project to avoid having to type `Logger::` before every log level.

## Usage

### Init

```cpp
Logger::init();
```

### Debug

```cpp
Logger::debug("This is a debug message");
```

<details>
  <summary>Preview</summary>

  ![](assets/debug.webp)
</details>

### Info

```cpp
Logger::info("This is an info message");
```

<details>
  <summary>Preview</summary>

  ![](assets/info.webp)
</details>

### Success

```cpp
Logger::success("This is a success message");
```

<details>
  <summary>Preview</summary>

  ![](assets/success.webp)
</details>

### Warn

```cpp
Logger::warn("This is a warning message");
```

<details>
  <summary>Preview</summary>

  ![](assets/warn.webp)
</details>

### Error

```cpp
Logger::error("This is an error message");
```

<details>
  <summary>Preview</summary>

  ![](assets/error.webp)
</details>

### Fatal

```cpp
Logger::fatal("This is a fatal message");
```

<details>
  <summary>Preview</summary>

  ![](assets/fatal.webp)

  > **Note:** Fatal log message blink in red to catch the user's attention.
</details>

## Changelog

see [CHANGELOG.md](CHANGELOG.md) for latest changes.

## Contributing

Contributing is disabled for this repository.

## License

This project is licensed under the AGPL v3 License - see the [LICENSE](LICENSE.md) file for details.

## Authors

- **[@Zarox28](https://github.com/Zarox28)**
