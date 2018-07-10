CXX=g++
CXX_FLAGS=-isystem ../src -pthread
OBJS=inorder_test postorder_test preorder_test fill_and_empty_test \
search_test_doesnt_exist search_test_empty search_test_exists remove_case1_test \
remove_case2_test remove_case3_test

all: $(OBJS)

$(OBJS): %: %.cpp
	$(CXX)  $(CXX_FLAGS) $(LD_FLAGS) -o $@.out $<

clean:
	rm *.o
	rm *.out

rebuild: clean all
