.PHONY: clean All

All:
	@echo "----------Building project:[ graph - Debug ]----------"
	@cd "graph" && $(MAKE) -f  "graph.mk"
clean:
	@echo "----------Cleaning project:[ graph - Debug ]----------"
	@cd "graph" && $(MAKE) -f  "graph.mk" clean
