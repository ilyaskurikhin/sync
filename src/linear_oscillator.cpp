#include <linear_oscillator.hpp>

LinearOscillator::LinearOscillator()
{
  Oscillator();
}

LinearOscillator::LinearOscillator(double position)
{
  double level(calculateLevel(position));
  Oscillator(position, level);
}

double
LinearOscillator::calculateLevel()
{
  setLevel(position_);
}

double 
LinearOcillator::calculateLevel(double position)
{
  setLevel(position);
}


