#include "mgos.h"
#include "mgos_pwm.h"

bool is2(int no)
{

printf("Hello From Library.is2");
return no==2;

}


bool mgos_mansaa_lib_init(void) {

printf("Hello From Library");

  LOG(LL_INFO, ("%s", "Hello From Library"));
  return true;
}
