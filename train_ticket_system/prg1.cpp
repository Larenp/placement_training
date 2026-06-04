#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Ticket
{
private:
    string passengerName;
    int age;
    int ticketId;
    string status; // Confirmed or Waiting

public:
    Ticket(string name, int a, int id, string s)
    {
        passengerName = name;
        age = a;
        ticketId = id;
        status = s;
    }

    int getTicketId()
    {
        return ticketId;
    }

    string getStatus()
    {
        return status;
    }

    void setStatus(string s)
    {
        status = s;
    }

    void display()
    {
        cout << "\nTicket ID : " << ticketId;
        cout << "\nPassenger : " << passengerName;
        cout << "\nAge       : " << age;
        cout << "\nStatus    : " << status << endl;
    }
};

class TicketSystem
{
private:
    vector<Ticket> tickets;
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

        cout << "\nEnter Passenger Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        string status;

        int confirmedCount = 0;

        for (auto &t : tickets)
        {
            if (t.getStatus() == "Confirmed")
                confirmedCount++;
        }

        if (confirmedCount < CONFIRMED_LIMIT)
            status = "Confirmed";
        else
            status = "Waiting";

        Ticket newTicket(name, age, nextTicketId++, status);
        tickets.push_back(newTicket);

        cout << "\nTicket Booked Successfully!";
        cout << "\nStatus: " << status << endl;
    }

    void viewTickets()
    {
        if (tickets.empty())
        {
            cout << "\nNo Tickets Booked.\n";
            return;
        }

        for (auto &t : tickets)
        {
            t.display();
            cout << "----------------------\n";
        }
    }

    void cancelTicket()
    {
        int id;
        cout << "\nEnter Ticket ID to Cancel: ";
        cin >> id;

        bool found = false;

        for (int i = 0; i < tickets.size(); i++)
        {
            if (tickets[i].getTicketId() == id)
            {
                string oldStatus = tickets[i].getStatus();

                tickets.erase(tickets.begin() + i);
                found = true;

                cout << "\nTicket Cancelled Successfully!\n";

                if (oldStatus == "Confirmed")
                {
                    for (auto &t : tickets)
                    {
                        if (t.getStatus() == "Waiting")
                        {
                            t.setStatus("Confirmed");
                            cout << "One Waiting Ticket Moved To Confirmed.\n";
                            break;
                        }
                    }
                }

                break;
            }
        }

        if (!found)
            cout << "\nTicket Not Found!\n";
    }

    void postponeTicket()
    {
        int id;

        cout << "\nEnter Ticket ID: ";
        cin >> id;

        for (auto &t : tickets)
        {
            if (t.getTicketId() == id)
            {
                string newDate;

                cout << "Enter New Travel Date: ";
                cin >> newDate;

                cout << "\nTicket " << id
                     << " postponed to " << newDate << endl;

                return;
            }
        }

        cout << "\nTicket Not Found!\n";
    }
};

bool login()
{
    string username, password;

    cout << "\n===== LOGIN =====\n";

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (username == "admin" && password == "1234")
    {
        cout << "\nLogin Successful!\n";
        return true;
    }

    cout << "\nInvalid Credentials!\n";
    return false;
}

int main()
{
    TicketSystem railway;

    if (!login())
        return 0;

    int choice;

    do
    {
        cout << "\n\n===== RAILWAY TICKET SYSTEM =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Cancel Ticket";
        cout << "\n3. Postpone Ticket";
        cout << "\n4. View Tickets";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            railway.bookTicket();
            break;

        case 2:
            railway.cancelTicket();
            break;

        case 3:
            railway.postponeTicket();
            break;

        case 4:
            railway.viewTickets();
            break;

        case 5:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}