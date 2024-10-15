# C++ Tutorial Management Application

## Project Overview

This application is designed to manage tutorials in a database. It features two modes: **Administrator** and **User**. The application provides functionalities for managing the tutorial database, creating personalized watchlists, and saving data in CSV or HTML formats. It also supports undo/redo operations and uses a Qt-based GUI for displaying tutorial watchlists.

## Features

### Administrator Mode
- **CRUD Operations**: Administrators can add, delete, or update tutorials.
- **View All Tutorials**: Administrators can list all tutorials in the database.

### User Mode
- **Search Tutorials**: Users can browse tutorials by presenter or view all tutorials.
- **Watchlist Creation**: Users can add or remove tutorials from their personal watchlist.
- **Watchlist Persistence**: Watchlists can be saved in either CSV or HTML format.
- **File Output**: When saving in CSV, data is stored as comma-separated values. When saving in HTML, tutorials are displayed in a table format.
- **Tutorial Playback**: Users can open the tutorial's link in a web browser.
- **Rate Tutorials**: After watching, users can rate a tutorial, increasing its number of likes.

### Undo/Redo
- Supports undo/redo functionality for adding, deleting, and updating tutorials.
- Implemented using inheritance and polymorphism.
- Keyboard shortcuts for undo (Ctrl+Z) and redo (Ctrl+Y).

### GUI
- Qt-based GUI with a table view for displaying the watchlist.
- Watchlist data displayed using the `QTableView` component and a custom model inheriting from `QAbstractTableModel`.

## Installation and Setup

### Prerequisites
- C++17 or later
- Qt 5.x or later
- A web browser (for opening tutorial links)
- A C++ compiler (e.g., g++, clang++)
- CMake (optional, for building)

### Steps to Run
1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-repository/tutorial-management-app.git
   cd tutorial-management-app
2. **Build the project**:
   - If using CMake:
     ```bash
     mkdir build
     cd build
     cmake ..
     make
     ```

3. **Run the application**:
   ```bash
   ./tutorial_management_app

4. **Choose a mode**:
 - Select either Administrator or User mode on startup.
   
**Administrator Operations**:
Add, delete, or update tutorials in the database.

**User Operations**:
Create, edit, and save your watchlist.

**File Formats**
CSV: Each tutorial is stored on one line with attributes separated by commas.
HTML: Tutorials are displayed in a table, with each row representing a tutorial.
