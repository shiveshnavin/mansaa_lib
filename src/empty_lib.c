#include "mgos.h"


bool is2(int no)
{

snprintf("Hello From Library.is2");
return no==2;

}


bool mgos_empty_lib_init(void) {

snprintf("Hello From Library");

  LOG(LL_INFO, ("%s", "Hello From Library"));
  return true;
}