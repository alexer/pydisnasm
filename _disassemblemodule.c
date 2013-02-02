#include <Python.h>
#include "nasm/disasm.h"

#define MAX_MNEMONIC 64

static PyObject *
disassemble_disassemble(PyObject *self, PyObject *args)
{
	char mnemonic[MAX_MNEMONIC];
	const char *data;
	long datalen, len, bits;

	if(!PyArg_ParseTuple(args, "s#I", &data, &datalen, &bits))
		return NULL;
	
	len = disasm(data, mnemonic, MAX_MNEMONIC, bits, 0, 0, 0);

	return Py_BuildValue("ls", len, mnemonic);
}

static PyMethodDef DisassembleMethods[] = {
	{"disassemble", disassemble_disassemble, METH_VARARGS, "Disassemble one instruction of x86 machine code."},
	{NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC
init_disassemble(void)
{
	(void) Py_InitModule("_disassemble", DisassembleMethods);
}
