from distutils.core import setup, Extension

module = Extension('_disnasm',
	sources = ['_disnasmmodule.c', 'nasm/disasm.c', 'nasm/regdis.c', 'nasm/insnsd.c', 'nasm/insnsb.c', 'nasm/regs.c', 'nasm/insnsn.c', 'nasm/sync.c', 'nasm/nasmlib.c'])

setup (name = 'disnasm',
	version = '0.1',
	description = 'Python bindings for nasm dissassembler bits',
	ext_modules = [module])

