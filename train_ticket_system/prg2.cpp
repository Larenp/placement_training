#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

// ================= USER AUTH =================

string registeredUser = "";
string registeredPass = "";

void registerUser()
{
    cout << "\n===== REGISTER =====\n";

    cout << "Create Username : ";
    cin >> registeredUser;

    cout << "Create Password : ";
    cin >> registeredPass;

    cout << "\nRegistration Successful!\n";
}

bool login()
{
    string username, password;

    cout << "\n===== LOGIN =====\n";

    cout << "Username : ";
    cin >> username;

    cout << "Password : ";
    cin >> password;

    if (username == registeredUser &&
        password == registeredPass)
    {
        cout << "\nLogin Successful!\n";
        return true;
    }

    cout << "\nInvalid Credentials!\n";
    return false;
}

// ================= TICKET BASE CLASS =================

class Ticket
{
protected:
    string passengerName;
    int age;
    int ticketId;
    string status;

public:
    Ticket(string name, int a, int id, string s)
    {
        passengerName = name;
        age = a;
        ticketId = id;
        status = s;
    }

    virtual string getStatus()
    {
        return status;
    }

    virtual void setStatus(string s)
    {
        status = s;
    }

    int getTicketId()
    {
        return ticketId;
    }

    virtual void display()
    {
        cout << "\nTicket ID : " << ticketId;
        cout << "\nPassenger : " << passengerName;
        cout << "\nAge       : " << age;
        cout << "\nStatus    : " << status << endl;
    }

    virtual ~Ticket() {}
};

// ================= DERIVED CLASSES =================

class ConfirmedTicket : public Ticket
{
public:
    ConfirmedTicket(string name, int age, int id)
        : Ticket(name, age, id, "Confirmed")
    {
    }
};

class WaitingTicket : public Ticket
{
public:
    WaitingTicket(string name, int age, int id)
        : Ticket(name, age, id, "Waiting")
    {
    }
};

// ================= TICKET SYSTEM =================

class TicketSystem
{
private:
    vector<Ticket *> tickets;
    int nextTicketId = 1001;

    const int MAX_TICKETS = 5;
    const int CONFIRMED_LIMIT = 2;

public:
    void bookTicket()
    {
        if (tickets.size() >= MAX_TICKETS)
        {
            cout << "\nNo Tickets Available!\n";
            return;
        }

        string name;
        int age;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nEnter Passenger Name : ";
        getline(cin, name);

        cout << "Enter Age : ";
        cin >> age;

        int confirmedCount = 0;

        for (auto t : tickets)
        {
            if (t->getStatus() == "Confirmed")
                confirmedCount++;
        }

        if (confirmedCount < CONFIRMED_LIMIT)
        {
            tickets.push_back(
                new ConfirmedTicket(name, age, nextTicketId++));

            cout << "\nTicket Booked Successfully!";
            cout << "\nStatus : Confirmed\n";
        }
        else
        {
            tickets.push_back(
                new WaitingTicket(name, age, nextTicketId++));

            cout << "\nTicket Booked Successfully!";
            cout << "\nStatus : Waiting\n";
        }
    }

void cancelTicket()
{
    int id;

    cout << "\nEnter Ticket ID : ";
    cin >> id;

    for (int i = 0; i < tickets.size(); i++)
    {
        if (tickets[i]->getTicketId() == id)
        {
            delete tickets[i];
            tickets.erase(tickets.begin() + i);

            cout << "\nTicket Cancelled Successfully!\n";
            return;
        }
    }

    cout << "\nTicket Not Found!\n";
}

    void viewTickets()
    {
        if (tickets.empty())
        {
            cout << "\nNo Tickets Booked.\n";
            return;
        }

        cout << "\n===== ALL TICKETS =====\n";

        for (auto t : tickets)
        {
            t->display();
            cout << "------------------------\n";
        }
    }

   

    ~TicketSystem()
    {
        for (auto t : tickets)
        {
            delete t;
        }
    }
};

// ================= MAIN =================

int main()
{
    TicketSystem railway;

    int authChoice;

    cout << "\n===== RAILWAY RESERVATION SYSTEM =====\n";
    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "Enter Choice : ";
    cin >> authChoice;

    if (authChoice == 1)
    {
        registerUser();

        cout << "\nPlease Login To Continue.\n";

        if (!login())
            return 0;
    }
    else if (authChoice == 2)
    {
        if (registeredUser.empty())
        {
            cout << "\nNo User Registered Yet!\n";
            cout << "Please Register First.\n";
            return 0;
        }

        if (!login())
            return 0;
    }
    else
    {
        cout << "\nInvalid Choice!\n";
        return 0;
    }

    int choice;

    do
    {
        cout << "\n\n===== RAILWAY MENU =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Cancel Ticket";
        cout << "\n3. View Tickets";
        cout << "\n4. Exit";
        cout << "\nEnter Choice : ";

        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid Input!\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            railway.bookTicket();
            break;

        case 2:
            railway.cancelTicket();
            break;
        case 3:
            railway.viewTickets();
            break;

        case 3:
            cout << "\nThank You For Using Railway Reservation System!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}