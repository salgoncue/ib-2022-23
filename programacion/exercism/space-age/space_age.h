#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

  class space_age{
   public:
    space_age(double seconds) : seconds_{seconds} {}
    double seconds() const { return seconds_; }
    double on_earth() const { return seconds_ / 31557600; }
    double on_mercury() const { return (seconds_ / 31557600) / 0.2408467; }
    double on_venus() const { return (seconds_ / 31557600) / 0.61519726; }
    double on_mars() const { return (seconds_ / 31557600) / 1.8808158; }
    double on_jupiter() const { return (seconds_ / 31557600) / 11.862615; }
    double on_saturn() const { return (seconds_ / 31557600) / 29.447498; }
    double on_uranus() const { return (seconds_ / 31557600) / 84.016846; }
    double on_neptune() const { return (seconds_ / 31557600) / 164.179132; }

   private:
    double seconds_;
  };

}  // namespace space_age

#endif // SPACE_AGE_H