all: 
	cd stack && $(MAKE)
	cd sort && $(MAKE)
	cd exercise && $(MAKE)


run: all
	stack/out/test
	sort/out/test

.PHONY: clean

clean:
	@find "." -wholename "*/out/*" -exec rm {} \;
