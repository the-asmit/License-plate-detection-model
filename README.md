# License Plate Detection 🚗🔍

A C++ project using OpenCV to detect license plates in images and video streams.  
Built with CMake for easy cross-platform compilation.

---

## ✨ Features
- Detects license plates using Haar Cascades  
- Works with both images and video streams  
- Cross-platform (Windows/Linux) build support using CMake  
- Lightweight and easy to set up  

---

## 🛠️ Tech Stack
- **C++17**  
- **OpenCV** (≥ 4.x)  
- **CMake** (≥ 3.10)  

---

## ⚙️ Installation & Setup

### 1. Install OpenCV  

You must have OpenCV installed before building this project. You can either install it manually or use MSYS2 (recommended for Windows).  

#### Option A – Install OpenCV manually  
- Download OpenCV from the [official releases page](https://opencv.org/releases/).  
- Build it with CMake or use precompiled binaries (on Windows).  
- Make sure to set the `OpenCV_DIR` variable when running CMake for this project.  

Example (Linux/Mac):  
```bash
sudo apt update
sudo apt install libopencv-dev
```

#### Option B – Use MSYS2 (recommended on Windows)  
If you’re on Windows, MSYS2 provides precompiled OpenCV packages that work out of the box:  
```bash
pacman -Syu
pacman -S mingw-w64-ucrt-x86_64-opencv
pacman -S mingw-w64-ucrt-x86_64-cmake
pacman -S mingw-w64-ucrt-x86_64-gcc
```

---

### 2. Build the Project
```bash
mkdir build && cd build
cmake ..
make
```

On Windows (MSYS2, MinGW UCRT64):  
```bash
mkdir build && cd build
cmake -G "MinGW Makefiles" ..
mingw32-make
```

---

## 📂 Project Structure
```
license-plate-detection/
├── CMakeLists.txt
├── main.cpp
├── examples/
│   ├── image1.jpg
│   └── image2.jpg
├── haarcascade_russian_plate_number.xml
├── README.md
└── LICENSE
```

