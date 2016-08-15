


class Oscillator
{
  public:
    // create Oscillator at default level
    Oscillator();

    // create Oscillator at arbitraty level and position
    Oscillator(double position, double level);

    void
    setLevel(double level);

    double
    getLevel();

    void
    setPosition(double position);

    double
    getPosition();

  private:

    double level_;
    double position_;
};
