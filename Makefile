all: 
	cd stack && $(MAKE)
	cd sort && $(MAKE)
	cd tree && $(MAKE)
	cd exercise && $(MAKE)

.PHONY: clean

clean:
	@find "." -wholename "*/out/*" -exec rm {} \;
