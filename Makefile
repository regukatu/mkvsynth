del: delbrot/lex.yy.c delbrot/y.tab.c delbrot/delbrot.c delbrot/plugins.c
	@cc -lm -lpthread -lavformat -lswscale                                       \
	jarvis/bufferAllocation.c            jarvis/frameControl.c                   \
	jarvis/spawn.c                       jarvis/properties.c                     \
	delbrot/lex.yy.c                     delbrot/y.tab.c                         \
	delbrot/delbrot.c                    delbrot/plugins.c                       \
	filters/basic/crop.c                 filters/basic/removeRange.c             \
	filters/coding/ffmpegDecode.c        filters/coding/x264Encode.c             \
	filters/debug/writeRawFile.c                                                 \
	filters/toys/gradientVideoGenerate.c                                         \
	-o del

delbrot/lex.yy.c: delbrot/delbrot.l
	@cd delbrot && flex delbrot.l && cd ..

delbrot/y.tab.c delbrot/delbrot.c: delbrot/delbrot.y
	@cd delbrot && yacc -d delbrot.y && cd ..
