class Human {
public:
    double X, Y;
    const char* Name;

    Human();
    Human(const char* name, double x, double y);

    virtual ~Human();

    void Move(double dx, double dy);
    virtual void Info();
    virtual void GetStatus();
};

class Player : public Human {
public:
    const char* Sport;

    Player();
    Player(const char* name, double x, double y, const char* sport);
    void Info() override;
    void GetStatus() override;
};
