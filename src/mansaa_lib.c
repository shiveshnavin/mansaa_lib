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

	mgos_gpio_set_mode(4, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(16, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(5, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(19, MGOS_GPIO_MODE_OUTPUT);


			mgos_pwm_set(4,200,0.1);
			//mgos_pwm_set(16,200,0.1);
			//mgos_pwm_set(5,200,0.1);
			//mgos_pwm_set(19,200,0.1);



  return true;
}
