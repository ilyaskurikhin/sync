
#include <Oscillator.hpp>

class LinearOscillator : public Oscillator
{
  public:

    // create new Oscillator
    // start at 0 in the cycle
    LinearOscillator();

    // create new Oscillator
    // defined by position in cycle
    LinearOscillator(double position);

    // calculate current level
    double
    caclulateLevel();

    // calculate level from position
    double
    calculateLevel(double position);


  private:

};
