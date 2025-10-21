/*
 * Copyright (c) 2025
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/shell/shell.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(hello_world, LOG_LEVEL_INF);

/**
 * @brief Shell command handler for "hello" command
 * 
 * This function is called when the "hello" command is entered in the shell.
 * It prints "world" as the response.
 */
static int cmd_hello(const struct shell *sh, size_t argc, char **argv)
{
	ARG_UNUSED(argc);
	ARG_UNUSED(argv);

	shell_print(sh, "world");
	return 0;
}

/* Register the "hello" command with the shell */
SHELL_CMD_REGISTER(hello, NULL, "Print 'world'", cmd_hello);

int main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);
	LOG_INF("Application started");
	
	return 0;
}
