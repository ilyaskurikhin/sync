#include <oscillator.hpp>

Oscillator::Oscillator()
{
  Oscillator(0,0);
}

Oscillator::Oscillator(double position, double level)
  position_(position), level_(level)
{
}

void
Oscillator::setLevel(double level)
{
  level_ = level;
}

double
Oscillator::getLevel()
{
  return level_;
}

void
Oscillator::setPosition(double position)
{
  position_ = position;
}

double
Oscillator::getPosition()
{
  return position_;
}


