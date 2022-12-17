class Solution {
    public List<Integer> majorityElement(int[] nums) {
        List<Integer> my=new ArrayList<>();
        Map<Integer,Integer> h=new HashMap<>();
        for(int n:nums){
            int k=h.getOrDefault(n,0);
            h.put(n,k+1);
        }
        for(int n:nums){
            if(my.contains(n))continue;
            if(h.get(n)>nums.length/3)my.add(n);
            if(my.size()==2)return my;
        }
        return my;
    }
}
