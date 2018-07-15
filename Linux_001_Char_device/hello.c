#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("Dual BSD/GPL");

int param_var = 0;

module_param(param_var, int, S_IRUSR|S_IWUSR);
static int hello_init(void)
{
	printk(KERN_ALERT "TEST: hello world, this is linux modulaton demo");
	printk(KERN_ALERT "param_var=%d" , param_var);
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "TEST: goodbye world, this is linux modulaton demo");

}
module_init(hello_init);
module_exit(hello_exit);
