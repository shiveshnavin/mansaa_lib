#include "mgos.h"
#include "mgos_pwm.h"

bool is2(int no)
{

printf("Hello From Library.is2");
return no==2;

}

void setprev()
{
		int ri,gi,bi,wi,count;
				char *content = json_fread("userData.json");
				LOG(LL_INFO, ("%s", content));
				json_scanf(content, strlen(content), "{count: %d, led_r: %d , led_g: %d , led_b:%d , led_w:%d}", &count,  &ri,&gi,&bi,&wi  );
				free(content);  

			double r,g,b,w;
			int FREQ=800;
			r=ri/255.0;
			g=gi/255.0;
			b=bi/255.0;
			w=wi/255.0; 
			if(r<0)
				r=0;
			if(g<0)
				g=0;
			if(b<0)
				b=0;
			if(w<0)
				w=0;
			if(r>1)
				r=1;
			if(g>1)
				g=1;
			if(b>1)
				b=1;
			if(w>1)
				w=1;
			//if(w==0)
			//	w=g;
			

			mgos_pwm_set(4,FREQ,r);
			mgos_pwm_set(16,FREQ,g);
			mgos_pwm_set(5,FREQ,b);
			mgos_pwm_set(19,FREQ,w);


}

bool mgos_mansaa_lib_init(void) {

printf("Hello From Library");

  LOG(LL_INFO, ("%s", "Hello From Library"));

	mgos_gpio_set_mode(4, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(16, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(5, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(19, MGOS_GPIO_MODE_OUTPUT);
setprev();

/*
			mgos_pwm_set(4,200,((double)mgos_sys_config_get_color_r())/255);
			mgos_pwm_set(16,200,((double)mgos_sys_config_get_color_g())/255);
			mgos_pwm_set(5,200,((double)mgos_sys_config_get_color_b())/255);
			mgos_pwm_set(19,200,((double)mgos_sys_config_get_color_w())/255);
*/
				

  return true;
}
