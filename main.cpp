/*
    REMOVING THIS HEADER IS A VIOLATION OF THE LICENSE AND MORAL RIGHTS.

    Copyright (c) 2026 Egemen Tutkun. All rights reserved.

    WARNING: This source code is the intellectual property of Egemen Tutkun.
    You are permitted to use, modify, and distribute this software under the terms of the MIT License, PROVIDED that the copyright notice and this header remain intact.

    For more details, see the LICENSE file in the root directory.
 */
#include <QApplication>
#include "setup/Window.h" // definition of the Setup Window
int main(int argc, char *argv[]) {
    // start the application engine
    QApplication app(argc, argv);

    // create the setup window and show it
    SetupWindow setup;
    setup.setWindowTitle("Crypton - Setup"); // Window title
    setup.resize(400, 300); // Window size
    setup.show();

    // start the application loop (this makes the window showing until user closes it)
    return app.exec();
