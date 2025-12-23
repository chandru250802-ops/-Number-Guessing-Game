# 🎯 Number Guessing Game

A fun number guessing game available in **two versions**: a modern C++ Qt GUI desktop application and a web-based version using HTML, CSS, and JavaScript.

---

## 📋 Table of Contents

- [Features](#features)
- [Project Structure](#project-structure)
- [Qt GUI Version](#qt-gui-version)
- [Web Version](#web-version)
- [Comparison](#comparison)

---

## ✨ Features

- **Random Number Generation**: Numbers between 1-100
- **Real-time Feedback**: Instant feedback on each guess
- **Auto-Reset**: Game automatically resets after a correct guess
- **Cross-Platform**: Available as desktop (Qt) and browser (Web)
- **User-Friendly UI**: Clean and intuitive interface

---

## 📁 Project Structure

```
number/
├── GuessGameQt/
│   ├── main.cpp
│   ├── mainwindow.h
│   ├── mainwindow.cpp
│   └── mainwindow.ui
├── web/
│   ├── index.html
│   ├── style.css
│   └── script.js
└── README.md
```

---

## 🖥️ Qt GUI Version

### Technologies
- **Language**: C++
- **Framework**: Qt 6 (Qt Widgets)
- **Platform**: Cross-platform (Windows, Linux, macOS)

### How to Run

1. **Install Qt Creator**
   - Download from [qt.io](https://www.qt.io/download)

2. **Create a Qt Widgets Application**
   - File → New Project → Qt Widgets Application
   - Choose a project location

3. **Copy Files**
   - Replace the generated files with:
     - `main.cpp`
     - `mainwindow.h`
     - `mainwindow.cpp`

4. **Build and Run**
   - Click the ▶️ **Run** button in Qt Creator

### Game Features
- Graphical user interface
- Message boxes for feedback
- Responsive buttons and input fields
- Professional desktop application look

### Code Overview

**main.cpp** - Entry point:
```cpp
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
```

---

## 🌐 Web Version

### Technologies
- **HTML5** - Structure
- **CSS3** - Styling (Modern UI with gradient background)
- **JavaScript** - Game logic

### How to Run

**Option 1: Direct File**
1. Navigate to the `web/` folder
2. Double-click `index.html`
3. The game opens in your default browser

**Option 2: Web Server**
```bash
# Using Python
python -m http.server 8000

# Using Node.js (http-server)
npx http-server
```

Then visit: `http://localhost:8000`

### Features
- Works in any modern browser
- No installation required
- Responsive design
- Beautiful gradient background
- Real-time game updates

### File Details

**index.html** - Structure:
- Game container with title
- Input field for guesses
- Guess button
- Result display area

**style.css** - Styling:
- Purple gradient background
- Centered game box
- Styled input and button
- Modern, clean appearance

**script.js** - Logic:
- Random number generation
- Guess comparison
- Game state management
- Input validation

---

## 🏆 Comparison

| Feature | Qt GUI | Web |
|---------|--------|-----|
| **Language** | C++ | JavaScript |
| **UI Type** | Desktop Application | Browser |
| **Platform** | Cross-platform | Universal (any browser) |
| **Installation** | Requires Qt | No installation |
| **Performance** | High | High |
| **Complexity** | Medium | Easy |
| **Professional Look** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |

---

## 🎮 Gameplay

1. **Start Game**
   - Launch either version

2. **Make a Guess**
   - Enter a number between 1-100
   - Click "Guess" button

3. **Get Feedback**
   - **Too Low ⬇️** - Your guess is smaller
   - **Too High ⬆️** - Your guess is larger
   - **Correct! 🎉** - You found the number!

4. **Play Again**
   - After a correct guess, a new number is generated
   - Continue guessing!

---

## 📝 Technical Details

### Qt Version
- Uses Qt Signals & Slots pattern
- Event-driven programming
- Message boxes for user feedback
- Random number via `rand()` function

### Web Version
- Client-side rendering
- DOM manipulation
- JavaScript's `Math.random()` function
- No server required

---

## 🎓 Learning Points

### Qt GUI
- Event handling
- Signal-slot connections
- UI design with Qt Designer
- Cross-platform development

### Web Version
- DOM manipulation
- JavaScript functions
- CSS styling & layouts
- Browser APIs

---

## 🔗 Repository

**GitHub**: [chandru250802-ops/-Number-Guessing-Game](https://github.com/chandru250802-ops/-Number-Guessing-Game)

---

## 📧 Author

**Chandrasekaran R**

---

## 📄 License

This project is open source and available under the MIT License.

---

## 🚀 Future Enhancements

- [ ] Difficulty levels (Easy/Medium/Hard)
- [ ] Score tracking
- [ ] Leaderboard
- [ ] Mobile app version
- [ ] Sound effects
- [ ] Dark/Light theme toggle

---

**Happy Guessing! 🎉**
