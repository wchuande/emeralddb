//
// Created by chuande on 2021/7/11.
//

#pragma once

#include <string>
#include <vector>
#include "ossSocket.h"
#include "commandFactory.h"

const int CMD_BUFFER_SIZE = 512;

class Edb {
public:
    Edb() {};

    ~Edb() {};
public:
    void start();

protected:
    void prompt();

private:
    void split(const std::string &text, char delim, std::vector<std::string> &result);

    char *readLine(char *p, int length);

    int readInput(const char *pPrompt, int numIndent);

private:
    ossSocket _sock;
    CommandFactory _cmdFactory;
    char _cmdBuffer[CMD_BUFFER_SIZE];
};


