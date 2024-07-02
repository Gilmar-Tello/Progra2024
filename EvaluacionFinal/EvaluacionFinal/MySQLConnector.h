#pragma once

#include <iostream>

using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace std;
using namespace System::Data;

public ref class MySQLConnector {
private:
    MySqlConnection^ connection;

public:
    String^ connectionString;
    String^ host = "localhost";
    String^ user = "root";
    String^ password = "";
    String^ database = "bd_vehiculo";

    MySQLConnector() {
        connectionString = "Server=" + host + ";Uid=" + user + ";Pwd=" + password + ";Database=" + database + ";";
        connection = gcnew MySqlConnection(connectionString);
    }

    bool OpenConnection() {
        try {
            connection->Open();
            return true;
        }
        catch (Exception^ ex) {
            Console::WriteLine("Error: " + ex->Message);
            return false;
        }
    }

    void CloseConnection() {
        if (connection != nullptr && connection->State == ConnectionState::Open) {
            connection->Close();
        }
    }

    MySqlConnection^ getConnection() {
        return connection;
    }

    ~MySQLConnector() {
        CloseConnection();
    }
};
