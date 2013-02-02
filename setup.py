from distutils.core import setup, Extension

module = Extension('_disassemble',
	sources = ['_disassemblemodule.c', 'nasm/disasm.c', 'nasm/insnsd.c', 'nasm/sync.c'])

setup (name = '_disassemble',
	version = '0.1',
	description = 'Python bindings for nasm dissassembler bits',
	ext_modules = [module])

